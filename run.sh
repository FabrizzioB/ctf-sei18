#!/bin/bash

# 1
cd 1.\ Flag/
docker-compose up
cd ..

# 3
cd 3.\ MySQL/
docker-compose up
cd ..

# 4
cd 4.\ Torrent/
docker-compose up
cd ..

# 8
cd 8.\ RCE/server/railsV/
docker-compose build
docker-compose up
cd ..