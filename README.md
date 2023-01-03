# txiotForvideoId能把当前上传云点播视频成功返回到视频ID上传TXIOT 
## 下载 qcloud-iot-explorer-sdk 例程
### git clone https://github.com/tencentyun/qcloud-iot-explorer-sdk-embedded-c.git
## 修改 Demo 程序
### 上述 git 命令执行成功后，会生成一个 qcloud-iot-sdk-embedded-c 目录
### 进入 qcloud-iot-explorer-sdk-embedded-c 目录。
### 修改该目录下的 device_info.json 文件。
![image](https://user-images.githubusercontent.com/4545727/209934066-480950d1-c875-49b0-b0cb-c00288bd36a9.png)

- 产品 ID： 将控制台的产品 ID，复制到上图 productId。
- 设备名称： 将控制台的设备名称，复制到上图 deviceName。
- 设备密钥：将控制台的设备密钥，复制到上图 deviceSecret。
### 下载以上数据模型到data_template_sample.c所在文件夹:samples/data_template/
### 确定“/medioFile/”当前路径所在位置是否合理，视频上传到VOD后生成同VODID的文件

## 编译
### 上述配置信息修改完成后，即可编译。
### 在 qcloud-iot-sdk-embedded-c 目录下执行以下命令进行编译。
### ./cmake_build.sh
### 编译成功后，会在 output/release/bin 目录下生成 light_data_template_sample 执行文件。
## 运行 Demo 程序
### 进入 output/release/bin 目录。
### 看到可执行文件 ./data_template_sample 。
## 使用CRONTAB定期运行.sh文件



