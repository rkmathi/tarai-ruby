#!/bin/bash

time ~/opt/bin/ruby -r tarai -e "puts Tarai.new.tak($1, $2, $3)"

time ~/opt/bin/ruby ./ruby/tarai.rb $1 $2 $3

