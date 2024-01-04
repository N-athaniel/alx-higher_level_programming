#!/usr/bin/node
// A script that display the status code of a GET request

const request = require('request');

const url = process.argv[2];

request(url, (error, response) => {
  if (error) {
    console.error(error);
    return;
  }
  console.log(`code: ${response.statusCode}`);
});
