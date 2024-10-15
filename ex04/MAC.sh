#! /bin/sh

ifconfig | grep -o -E '([A-Z0-9a-z]{2}:){4}[A-Z0-9a-z]{2}'
