# txiotForvideoId
能把当前上传云点播视频成功返回到视频ID上传TXIOT 

#using crontab to apply this programme
# m h  dom mon dow   command
#每天23:30清楚腾讯上传云点播的短视频
25 23 * * *  sudo chmod 755 /home/pi/txvod/h264/*.*
25 23 * * *  sudo chmod 755 /home/pi/txvod/mp4/*.*

30 23 * * *  rm /home/pi/txvod/h264/*.*
35 23 * * *  rm /home/pi/txvod/mp4/*.*

#在规定时间范围内每隔5分钟上传云点播短视频
*/3 * * * * python /home/pi/txvod/doCreatMP4.py >>/dev/null 2>&1

