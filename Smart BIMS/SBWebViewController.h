//
//  SBWebViewController.h
//  SmartBIMS
//
//  Created by pcn_vc on 2023/08/07.
//

#import <UIKit/UIKit.h>
#import <WebKit/WebKit.h>
#import <SafariServices/SafariServices.h>
#import <AVFoundation/AVFoundation.h>
#import "SBServerURLContent.h"

#define kLogoutActionSheetTag   -9999

NS_ASSUME_NONNULL_BEGIN

@class SBUserInfoVO;
@class SBWebViewController;
@interface SBWebViewController : UIViewController <WKNavigationDelegate, WKScriptMessageHandler, WKUIDelegate>
{
    SBUserInfoVO* m_SBUserInfoVO;
    NSMutableDictionary *takeOverInfoMap;
    
    id m_target;
    SEL m_selector;
}

@property (nonatomic, retain) SBUserInfoVO* m_SBUserInfoVO;
@property (nonatomic, retain) SBWebViewController* m_SBWebViewController;
@property (nonatomic, retain) NSMutableDictionary *takeOverInfoMap;;
@property (nonatomic, assign) id m_target;
@property (nonatomic, assign) SEL m_selector;

@property (nonatomic, strong) IBOutlet WKWebView *main_webview;
@property (nonatomic, strong) WKUserContentController *javascriptController;
@property (nonatomic, strong) WKWebViewConfiguration *javascriptConfig;
@property (nonatomic, strong) WKPreferences *kwebviewPreference;

@end

NS_ASSUME_NONNULL_END
