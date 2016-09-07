//
//  ViewController.m
//  DNProgressHUD
//
//  Created by mainone on 16/9/7.
//  Copyright © 2016年 wjn. All rights reserved.
//

#import "ViewController.h"
#import "MBProgressHUD+DN.h"

@interface ViewController () <UIWebViewDelegate>

@property (weak, nonatomic) IBOutlet UIWebView *webview;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    self.view.backgroundColor = [UIColor redColor];
    
    [self.webview loadRequest:[NSURLRequest requestWithURL:[NSURL URLWithString:@"http://www.baidu.com"]]];
    self.webview.delegate = self;
}

- (void)webViewDidFinishLoad:(UIWebView *)webView {
    [MBProgressHUD hideHUD];
    [MBProgressHUD showSuccess:@"加载成功"];
}

- (BOOL)webView:(UIWebView *)webView shouldStartLoadWithRequest:(NSURLRequest *)request navigationType:(UIWebViewNavigationType)navigationType {
    NSLog(@"%@", [request URL].absoluteString);
    
    if ([[[request URL] absoluteString] isEqualToString:@"https://view.inews.qq.com/a/NEW2016081703339855"]) {
            [MBProgressHUD noDataTipView:self.view title:@"没有数据" imageName:nil refresh:^{
                [MBProgressHUD showMessage:@"正在加载"];
                [self.webview loadRequest:[NSURLRequest requestWithURL:[NSURL URLWithString:@"http://www.baidu.com"]]];
            }];
    }
    
    return YES;
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
