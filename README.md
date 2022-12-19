# txiotForvideoId能把当前上传云点播视频成功返回到视频ID上传TXIOT 
## #每天23:30腾讯上传云点播的短视频
- 25 23 * * *  sudo chmod 755 /home/pi/txvod/h264/*.
- 25 23 * * *  sudo chmod 755 /home/pi/txvod/mp4/*.*

- 30 23 * * *  rm /home/pi/txvod/h264/*.*
- 5 23 * * *  rm /home/pi/txvod/mp4/*.*

## #在规定时间范围内每隔3分钟上传云点播短视频
- */3 * * * * python /home/pi/txvod/doCreatMP4.py >>/dev/null 2>&1

