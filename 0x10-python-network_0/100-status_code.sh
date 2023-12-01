#!/bin/bash
# A script thats displays only status code
curl -s -o /dev/null -I -w "%{http_code}" "$1"
