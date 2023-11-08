#!/bin/sh
ip link | grep ether | awk '{print$2}'