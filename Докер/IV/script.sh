#!/usr/bin/env bash

gcc ./server.c -l fcgi -o ./server
spawn-fcgi -p 8080 ./server
nginx -g 'daemon off;'
nginx -s reload
