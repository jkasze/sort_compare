# sort_compare

本项目选取了七个基于比较的算法，产生M组随机数组，每组N个随机数来进行比较，找出了两种最快的算法。

## 目录

-   [背景](#背景)
-   [安装](#安装)
-   [示例](#示例)
-   [License](#License)

## 背景

众所周知，对于基于比较的排序算法，时间复杂度最优秀的为O(N*logN)，但是常数项我们忽略不计。

在本项目中，我们以比较和交换的次数作对比，找出在M(M>=5)组随机数组，每组N(N>=10^4)个随机数的情况下，两种比较和交换次数最少的排序算法。

## 安装

这个项目使用[gcc](https://gcc.gnu.org/)和[make](https://www.gnu.org/software/make/)，确保你安装了它们。

### Linux

```shell
git clone https://github.com/jkasze/sort_compare

cd sort_compare

make
```

## 示例

make后会将可执行文件生成在build目录下，选择test运行。

```shell
./build/test
```

## License

[MIT](LICENSE) © jkasze



