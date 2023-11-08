#include <unistd.h>
#include <stdio.h>

typedef struct sd
{
	int dw, dh;
	char bgr, tip, fil;
	float x, y, w, h;
	FILE *f;
} td;
int sl(char *s)
{
	int i = 0;
	while (s[i])
		i++;
	return i;
}
int terr(char *s)
{
	write(1, s, sl(s));
	return 1;
}
int ex(td *d)
{
	fclose(d->f);
	terr("Error: Operation file corrupted\n");
	return 1;
}
int drf(td *d, char *fld)
{
	int num = fscanf(d->f, "%d %d %c\n", &d->dw, &d->dh, &d->bgr);
	if (num < 1 || num != 3)
		return 1;
	if (d->dw < 1 || d->dw > 300 || d->dh < 1 || d->dh > 300)
		return 1;
	for (int i = 0; i < d->dw * d->dh; i++)
		fld[i] = d->bgr;
	return 0;
}
int check(td *d, float x, float y)
{
	if (x < d->x || x > d->x + d->w || y < d->y || y > d->y + d->h)
		return 0;
	else if (x - d->x < 1. || (d->x + d->w) - x < 1. ||
			 y - d->y < 1. || (d->y + d->h) - y < 1.)
		return 1;
	return 2;
}
int fill(td *d, char *fld)
{
	int num;
	while ((num = (fscanf(d->f, "%c %f %f %f %f %c\n",
		&d->tip, &d->x, &d->y, &d->w, &d->h, &d->fil))) == 6)
	{
		if (d->h <= 0 || d->w <= 0 || (d->tip != 'r' && d->tip != 'R'))
			return 1;
		for (int y = 0; y < d->dh; y++)
		{
			for (int x = 0; x < d->dw; x++)
			{
				int ch = check(d, (float)y, (float)x);
				if (ch == 1 || (ch == 2 && d->tip == 'R'))
					fld[x * d->dw + y] = d->fil;
			}
		}
	}
	if (num != -1)
		return 1;
	return 0;
}
void put(td *d, char *fld)
{
	for (int i = 0; i < d->dh; i++)
	{
		write(1, &fld[i * d->dw], d->dw);
		write(1, "\n", 1);
	}
}
int main(int c, char **v)
{
	td d;
	static char fld[90000];
	if (c != 2)
		return terr("Error: argument\n");
	if (!(d.f = fopen(v[1], "r")))
		return terr("Error: Operation file corrupted\n");
	if (drf(&d, fld))
		return ex(&d);
	if (fill(&d, fld))
		return ex(&d);
	put(&d, fld);
	fclose(d.f);
	return 0;
}
