FROM nginx

WORKDIR /home/

COPY ./server.c .
COPY ./script.sh .
COPY ./nginx.conf /etc/nginx/nginx.conf
RUN apt-get update && apt-get install -y gcc spawn-fcgi libfcgi-dev


#HEALTHCHECK CMD curl http://localhost:81/ || exit 1

ENTRYPOINT ["bash", "./script.sh"]


