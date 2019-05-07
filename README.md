# ApkInstaller
apkファイルをエンジニア以外でも簡単にインストールすることができる機能の提供...

## What's the ApkInstaller?
apkInstaller is native applicaion tool.  
I'm making it easy to install the apk file.

## How to use this Application
1. configurate application setting parameter.
2. double click to ApkInstaller(application).

### -- About Configurate Application Setting parameter --
* Windows Application
    1. Edit config.json
    2. Drag&Drop to 'apk' file ~~or 'apk' file and 'androidManifest.xml' file~~.

* MacOSX Application 
    1. Edit config.json 

### -- About Edit 'config.json' --
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



