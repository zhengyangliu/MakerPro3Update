# MakerPro3升级补丁 #

## 功能实现 ##

在软件中的Powershell脚本将会自动检测在Master分支下的Changlog.md中Lastest Version 行中的V开头的版本号，如下行版本号为0.2。

    - Lastest Version: V0.2

而后脚本将读取软件目录下的Changlog.md文件，比对本地版本号如果网络不通或版本相同则直接启动MakerPro3，如果落后则从服务器端下载最新版本号对应的Relase包，并会自动解压覆盖旧的文件，自动删除软件缓存，而后复制新的Changlog.md到目录下，最后删除下载的压缩包和解压目录。

## 更新方式 ##

因为脚本判别版本号的方式，新版本的Changlog.md需要按照以下规则改写

- 在*Lastest Version*后填写新的版本号
- 版本号需要以V开头且不可使用多个小数点

对应版本的Relase需要按一下规则释放

- Relase版本号于当前Changlog.md中最新版本号相同,且 **V** 为大写
- Relase中需要附带当前版本目录下文件的Zip压缩包压缩包名称为 **MakerPro3Update_V+版本号** 命名如： *MakerPro3Update_V0.2*

## 开发规则 ##

Master为实际释放主分支，develop为开发分支。

建议维护者使用自己的Fork版本，在本地修改MakerPro3中脚本头部的地址设置来测试更新的功能，之后再向主分支PR。


