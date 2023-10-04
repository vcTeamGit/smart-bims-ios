//
//  SBLoginViewController.h
//  Smart BIMS
//
//  Created by  on 11. 8. 4..
//  Copyright 2011년 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CommonCrypto/CommonDigest.h>
#import "SBServerURLContent.h"

#define kIdTextFieldTagIndex 1
#define kPwTextFieldTagIndex 2


@class HttpRequest;
@class SBUserInfoVO;
@class SBDeviceConfirmViewController;
@class SBLoginMgrListViewController;
@class SBWebViewController;


@interface SBLoginViewController : UIViewController <UIAlertViewDelegate, UITextFieldDelegate>
{
    UITextField* m_textFieldId;
    UITextField* m_textFieldPassword;
    
    UIButton* m_loginButton;
    
    UIActivityIndicatorView* m_activityIndicatorView;
    
    HttpRequest* m_httpRequest;
    
    SBUserInfoVO* m_SBUserInfoVO;
    
    SBDeviceConfirmViewController* m_SBDeviceConfirmViewController;
    SBLoginMgrListViewController* m_SBLoginMgrListViewController;
    SBWebViewController* m_SBWebViewController;
    
    NSString* m_strVersion;
    UISwitch* keepSignSwitch;

    int viewWidth;
    int viewHeight;
    int winHeight;
}

@property (nonatomic, retain) IBOutlet UITextField* m_textFieldId;
@property (nonatomic, retain) IBOutlet UITextField* m_textFieldPassword;
@property (nonatomic, retain) IBOutlet UIButton* m_loginButton;

@property (nonatomic, retain) IBOutlet UIActivityIndicatorView* m_activityIndicatorView;

@property (nonatomic, retain) HttpRequest* m_httpRequest;

@property (nonatomic, retain) SBUserInfoVO* m_SBUserInfoVO;

@property (nonatomic, retain) SBWebViewController* m_SBWebViewController;
@property (nonatomic, retain) SBDeviceConfirmViewController* m_SBDeviceConfirmViewController;
@property (nonatomic, retain) SBLoginMgrListViewController* m_SBLoginMgrListViewController;

@property (nonatomic, retain) NSString* m_strVersion;

@property (retain, nonatomic) IBOutlet UISwitch *keepSignSwitch;

- (IBAction)loginButtonPressed:(id)sender;

- (void)stopActivityIndicatorView;

- (IBAction)backgroundTab:(id)sender;
- (void) pageReset;
- (void) goMainView;

- (void)didSelectMgrSiteCode:(id)obj;

- (IBAction)keepSignSwitchPressed:(id)sender;

@end
