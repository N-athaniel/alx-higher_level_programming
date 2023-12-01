#!/bin/bash
# A script that Select methods
curl -sI "$1" | grep Allow: | cut -d":" -f2 | sed 's/ //'

