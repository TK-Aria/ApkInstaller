# ApkInstaller
apkファイルをエンジニア以外でも簡単にインストールすることができる機能の提供...

## What's the ApkInstaller?
apkInstaller is native applicaion tool.  
I'm making it easy to install the apk file.

## How to use this Application

* Windows Application
    1. Edit config.json
    2. Drag&Drop to 'apk' file

* MacOSX Application 
    1. Edit config.json 

### About Edit 'config.json'
* config.json
    * ${YourApkFileName} : example ("package.apk")
    * ${YourBundleName} : example ("com.Default.Company")
```
{
    "value0": {
        "cereal_class_version": 1,
        "fileName": "${YourApkFileName}",
        "bundleName": "${YourBundleName}"
    }
}
```

## Documents
* Top
    * [Introduce](./Document/Introduce.md)
    * [Todo](./Document/Todo.md)
    * [Reference](./Document/Reference.md)

## Licence
* [MIT License](./LICENSE)



