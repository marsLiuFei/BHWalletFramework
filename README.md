# BHWalletFramework
钱包SDK
配置全局基地址，在使用方法前配置
[WRWalletManager defaultManager].baseUrl = @"http://gamma.uhomecp.com";
调用方法用单例对象去调用
如：
[[WRWalletManager defaultManager] openWalletMinePageWithUid:@"000000" currentViewController:self];
