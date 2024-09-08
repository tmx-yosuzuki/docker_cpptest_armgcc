# ベースとなるコンテナ(ubuntu)のイメージ取得
FROM ubuntu:20.04

RUN apt-get update

# 必要なツールのインストール

# ARMコンパイラ 
RUN apt-get install -y g++-arm-linux-gnueabi

# QEMU
RUN apt-get install -y qemu-user-static

# C/C++test
ADD parasoft_cpptest_standard-2023.2.1-linux.x86_64.tar.gz /opt

# make
RUN apt-get install -y build-essential

# その他便利なツール
RUN apt-get install -y git
