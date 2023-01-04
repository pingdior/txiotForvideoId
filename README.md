# txiotForvideoId能把当前上传云点播视频成功返回到视频ID上传TXIOT 
## 1.下载 qcloud-iot-explorer-sdk 例程
### git clone https://github.com/tencentyun/qcloud-iot-explorer-sdk-embedded-c.git
## 2. 修改 Demo 程序
### 2.1 上述 git 命令执行成功后，会生成一个 qcloud-iot-sdk-embedded-c 目录
### 2.2 进入 qcloud-iot-explorer-sdk-embedded-c 目录。
### 2.3 修改该目录下的 device_info.json 文件。
![image](https://user-images.githubusercontent.com/4545727/209934066-480950d1-c875-49b0-b0cb-c00288bd36a9.png)

- 产品 ID： 将控制台的产品 ID，复制到上图 productId。
- 设备名称： 将控制台的设备名称，复制到上图 deviceName。
- 设备密钥：将控制台的设备密钥，复制到上图 deviceSecret。
### 2.4 下载以上数据模型到data_template_sample.c所在文件夹:samples/data_template/
### 2.5 确定data_template_sample.c “/medioFile/”当前路径所在位置是否合理，视频上传到VOD后生成同VODID的文件
### 2.6 CMakeLists.txt set(FEATURE_EVENT_POST_ENABLED ON)
## 3.编译
### 3.1 上述配置信息修改完成后，即可编译。
### 3.2 在 qcloud-iot-sdk-embedded-c 目录下执行以下命令进行编译。
### 3.3 ./cmake_build.sh
### 3.4 编译成功后，会在 output/release/bin 目录下生成 data_template_sample 执行文件。
## 4. 运行 Demo 程序
### 4.1 进入 output/release/bin 目录。
### 4.2 看到可执行文件 ./data_template_sample 。
## 5. 使用CRONTAB定期运行dataSample.sh文件



