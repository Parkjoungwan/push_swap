#!/bin/bash

 echo -e "\033[0;32mUpdates to GitHub...\033[0m"

# Add changes to git
git add .

#Commit changes.
msg="Upload data `date`"
if [ $# -eq 1 ]
   then msg="$1"
fi
git commit -m "$msg"

# Push source
git push origin master
