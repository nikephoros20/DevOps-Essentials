#!/usr/bin/env bash
docker build . -t server42
docker run --rm -d -p 80:81 --name server42 server42

