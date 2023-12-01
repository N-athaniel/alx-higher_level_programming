#!/bin/bash
# A script that sends a  post request
curl -sd "email=hr@holbertonschool.com&subject=I will always be here for PLD" -X POST "$1"
