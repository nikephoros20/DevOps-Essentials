#!/usr/bin/env bash

docker build . -t server50:v1

docker run --rm -d -p 80:81 --name server50 server50:v1

