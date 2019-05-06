# ApkInstaller Makefile.
.DEFAULT_GOAL := help

# Makefile -- help -- 
.PHONY: help
help:
	@echo helloworld 

.PHONY: build_xcode
build_xcode:
	xcodebuild -workspace ./Projects/Xcode/ApkInstaller.xcodeproj/project.xcworkspace -scheme ApkInstaller -configuration Debug archive -archivePath ./Bin/OSX/ HOGE_FEATURE_DISABLE=1

.PHONY: build_visualstudio
build_visualstudio:
    msbuild.exe ./Projects/VisualStudio/

.PHONY: build_clang
build_clang:

.PHONY: build_fortrun
build_fortrun:

.PHONY: build_intelcc
build_intelcc:

.PHONY: build_cmake
build_cmake:

.PHONY: build_document
build_document:

.PHONY: build_installer
build_installer:

.PHONY: setup_author
setup_author:
	git config list 
	git config user.name "t.k-aria"
	git config user.email "activestaffsunite.t.k.aria@gmail.com"
	git log --pretty=fuller
	git filter-branch -f --env-filter "GIT_AUTHOR_NAME='t.k-aria' GIT_AUTHOR_EMAIL='activestaffsunite.t.k.aria@gmail.com'; GIT_COMMITTER_NAME='t.k-aria'; GIT_COMMITTER_EMAIL='activestaffsunite.t.k.aria@gmail.com';" HEAD 
	git log --pretty=fuller

