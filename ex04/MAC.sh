#! /bin/sh

ifconfig | grep -o -E '([A-Z0-9a-z]{2}:){5}[A-Z0-9a-z]{2}'
