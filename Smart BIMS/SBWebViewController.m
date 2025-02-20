//
//  SBWebViewController.m
//  SmartBIMS
//
//  Created by pcn_vc on 2023/08/07.
//

#import "SBWebViewController.h"
#import "SBUserInfoVO.h"

@import WebKit;
@interface SBWebViewController ()

@end

@implementation SBWebViewController

@synthesize main_webview;
@synthesize javascriptController;
@synthesize javascriptConfig;
@synthesize kwebviewPreference;

@synthesize m_target;
@synthesize m_selector;
@synthesize m_SBUserInfoVO;

// MARK: - [뷰 로드 실시]
- (void)viewDidLoad {
    [super viewDidLoad];
    
    printf("\n");
    printf("==================================== \n");
    printf("[ViewController >> viewDidLoad() :: 뷰 로드 실시] \n");
    printf("==================================== \n");
    printf("\n");
}


// MARK: - [뷰 로드 완료]
- (void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
    printf("\n");
    printf("==================================== \n");
    printf("[ViewController >> viewWillAppear() :: 뷰 로드 완료] \n");
    printf("==================================== \n");
    printf("\n");
}


// MARK: - [뷰 화면 표시]
- (void)viewDidAppear:(BOOL)animated {
    [super viewDidAppear:animated];
    printf("\n");
    printf("==================================== \n");
    printf("[ViewController >> viewDidAppear() :: 뷰 화면 표시] \n");
    printf("==================================== \n");
    printf("\n");
    
    // [웹뷰 호출 수행 실시]
    [self init_Webview];
    
    // [테스트 메인 함수 호출]
    [self testMain];
}


// MARK: - [뷰 정지 상태]
- (void)viewWillDisappear:(BOOL)animated {
    [super viewWillDisappear:animated];
    printf("\n");
    printf("==================================== \n");
    printf("[ViewController >> viewWillDisappear() :: 뷰 정지 상태] \n");
    printf("==================================== \n");
    printf("\n");
}

// MARK: - [뷰 종료 상태]
- (void)viewDidDisappear:(BOOL)animated {
    [super viewDidDisappear:animated];
    printf("\n");
    printf("==================================== \n");
    printf("[ViewController >> viewDidDisappear() :: 뷰 종료 상태] \n");
    printf("==================================== \n");
    printf("\n");
}

// MARK: - [헤더 파일에 정의 없이 : void 메소드 구현]
- (void)testMain {
    printf("\n");
    printf("==================================== \n");
    printf("[ViewController >> testMain() :: 테스트 메소드 수행] \n");
    printf("==================================== \n");
    printf("\n");
}



// MARK: - [앱 상태 바 콘텐츠 색상 커스텀 변경 실시]
-(UIStatusBarStyle)preferredStatusBarStyle {
    // return UIStatusBarStyleLightContent; // [상태바 콘텐츠 색상 흰색으로 변경 : ex (배터리 표시)]
    if (@available(iOS 13.0, *)) { // [상태바 콘텐츠 색상 검정색으로 변경 : ex (배터리 표시)]
        return UIStatusBarStyleDarkContent;
    } else {
        return UIStatusBarStyleDefault;
    }
}


// MARK: - [동적 웹뷰 생성 및 초기 값 설정]
- (void)init_Webview {
    printf("\n");
    printf("==================================== \n");
    printf("[ViewController >> init_Webview() :: 웹뷰 초기화 및 로드 수행 실시] \n");
    printf("==================================== \n");
    printf("\n");
    
    // -----------------------------------------
    
    // MARK: [디바이스 화면 사이즈 확인]
    
    // [뷰 컨트롤러 배경 색상 지정]
    [self.view setBackgroundColor: [UIColor colorWithRed:0.40 green:0.60 blue:0.85 alpha:1.0]];
    
    // [디바이스 전체 height 값 확인 실시]
    double deviceHeight = self.view.frame.size.height;
    
    // [디바이스 전체 width 값 확인 실시]
    double deviceWidth = self.view.frame.size.width;
    
    // [디바이스 휴대폰 상태 바 높이 사이즈 확인 실시]
    //safe area 사이즈
    //double statusBarFrameHeight = [UIApplication sharedApplication].statusBarFrame.size.height;
    UIWindow *window = UIApplication.sharedApplication.windows.firstObject;
    double statusBarFrameHeight = window.safeAreaInsets.top;
    double statusBarFrmaeBottom = window.safeAreaInsets.bottom;
    
    
    // [디바이스 휴대폰 상태 바 너비 사이즈 확인 실시]
    double statusBarFrameWidth = [UIApplication sharedApplication].statusBarFrame.size.width;

    printf("\n");
    printf("==================================== \n");
    printf("[ViewController >> init_Webview() :: 디바이스 화면 사이즈 확인] \n");
    printf("[deviceHeight :: %f] \n", deviceHeight);
    printf("[deviceWidth :: %f] \n", deviceWidth);
    printf("[statusBarFrameHeight :: %f] \n", statusBarFrameHeight);
    printf("==================================== \n");
    printf("\n");
    
    // -----------------------------------------
    
    // MARK: [기존에 저장된 캐시 및 쿠키 삭제 수행 실시]
    
    NSSet *websiteDataTypes
    = [NSSet setWithArray:@[
                            WKWebsiteDataTypeDiskCache, // 디스크 캐시
                            WKWebsiteDataTypeMemoryCache, // 메모리 캐시
                            WKWebsiteDataTypeCookies, // 웹 쿠키,
                                                     
                            WKWebsiteDataTypeOfflineWebApplicationCache, // 앱 캐시
                            WKWebsiteDataTypeWebSQLDatabases, // 웹 SQL 데이터 베이스
                            WKWebsiteDataTypeIndexedDBDatabases // 데이터 베이스 정보
                                                     
                            //WKWebsiteDataTypeLocalStorage // 로컬 스토리지
                            //WKWebsiteDataTypeSessionStorage // 세션 스토리지

    ]];
    NSDate *dateFrom = [NSDate dateWithTimeIntervalSince1970:0];
    [[WKWebsiteDataStore defaultDataStore] removeDataOfTypes:websiteDataTypes modifiedSince:dateFrom completionHandler:^{
        printf("\n");
        printf("==================================== \n");
        printf("[ViewController >> init_Webview() :: 기존에 저장된 캐시 및 쿠키 삭제 수행] \n");
        printf("==================================== \n");
        printf("\n");
    }];
    
    // -----------------------------------------
    
    // MARK: [URL 요청 후 잔여 캐시 데이터 삭제]
    
    NSCache *myCache = [[NSCache alloc] init];
    [myCache removeAllObjects];
    
    // -----------------------------------------
    
    // MARK: [웹 보기에 대한 쿠키, 디스크 및 메모리 캐시, 기타 유형의 데이터를 관리하는 개체 지정]
    
    self.javascriptConfig = [[WKWebViewConfiguration alloc] init];
    
    WKWebsiteDataStore *dataStore = [WKWebsiteDataStore defaultDataStore];
    self.javascriptConfig.websiteDataStore = dataStore; // [디폴트]
    
    // -----------------------------------------
    
    // MARK: [자바스크립트 통신을 위한 브릿지 추가]
    WKUserContentController *userScript = [[WKUserContentController alloc] init];
    [userScript addScriptMessageHandler:self name:@"iosBridge"];
    self.javascriptController = userScript;
    self.javascriptConfig.userContentController = self.javascriptController;
    
    // -----------------------------------------
    
    // MARK: [웹뷰 객체 생성 실시]
    CGRect webViewSize = CGRectMake(
                                 0, // [x]
                                 statusBarFrameHeight, // [y]
                                 deviceWidth, // [width]
                                 (deviceHeight - statusBarFrameHeight - statusBarFrmaeBottom) // [height]
                        );
    self.main_webview = [[WKWebView alloc] initWithFrame:webViewSize configuration:self.javascriptConfig];
    // -----------------------------------------
    
    // MARK: [웹뷰 추가 옵션 설정 값 지정]
    self.main_webview.configuration.preferences.javaScriptCanOpenWindowsAutomatically = true;  // 자바스크립트 활성화
    self.main_webview.configuration.preferences.javaScriptEnabled = true;
    self.main_webview.navigationDelegate = self; // 웹뷰 변경 상태 감지 위함
    self.main_webview.scrollView.alwaysBounceVertical = false; // 웹뷰 스크롤 바운스 방지
    self.main_webview.scrollView.bounces = false; // 웹뷰 스크롤 바운스 방지
    //self.main_webview.allowsBackForwardNavigationGestures = true; // 웹뷰 뒤로가기, 앞으로 가기 제스처 사용
    //self.main_webview.addObserver(self, forKeyPath: #keyPath(WKWebView.estimatedProgress), options: .new, context: nil); // 웹뷰 로드 상태 퍼센트 확인
    self.main_webview.UIDelegate = self; // alert 팝업창 이벤트 받기 위함

    // -----------------------------------------
    
    // MARK: [웹뷰를 화면에 추가 실시]
    [self.view addSubview:self.main_webview];
    
    // -----------------------------------------
    
    
    // MARK: [웹뷰 페이지 로드 수행 실시]
    NSString* url_main_page = URL_MAIN_PAGE;
    if ( m_SBUserInfoVO.szMgrData != nil ) {
        url_main_page = URL_MAIN_MGR;
    }
    NSMutableURLRequest *request = [[NSMutableURLRequest new] autorelease];
    [request setURL:[NSURL URLWithString:url_main_page]];
    [request setHTTPMethod:@"POST"];
    [request setValue:@"IOS" forHTTPHeaderField:@"app-device"];
#if TARGET==DEV
    [request setValue:@"DEV" forHTTPHeaderField:@"app-mod"];
#endif

#if TARGET==PROD
    [request setValue:@"PROD" forHTTPHeaderField:@"app-mod"];
#endif

#if TARGET==LOCAL
    [request setValue:@"LOCAL" forHTTPHeaderField:@"app-mod"];
#endif
        
    
    [self.main_webview loadRequest:request];
    //[self.main_webview loadRequest:[NSURLRequest requestWithURL:[NSURL URLWithString: url_main_page]]];
    
    // -----------------------------------------
}

- (void)dealloc {
    [self.main_webview release];
    [super dealloc];
}

- (void) setDelegate:(id)target selector:(SEL)selector
{
    self.m_target = target;
    self.m_selector = selector;
}

- (void)webView:(WKWebView *)webView runJavaScriptAlertPanelWithMessage:(NSString *)message initiatedByFrame:(WKFrameInfo *)frame completionHandler:(void (^)(void))completionHandler {
    UIAlertController *alertController = [UIAlertController alertControllerWithTitle:message
                                                                             message:nil
                                                                      preferredStyle:UIAlertControllerStyleAlert];
    [alertController addAction:[UIAlertAction actionWithTitle:@"OK"
                                                        style:UIAlertActionStyleCancel
                                                        handler:^(UIAlertAction *action) { completionHandler(); }]];
    
    [self presentViewController:alertController animated:YES completion:^{}];
}

- (void)webView:(WKWebView *)webView runJavaScriptConfirmPanelWithMessage:(nonnull NSString *)message initiatedByFrame:(nonnull WKFrameInfo *)frame completionHandler:(nonnull void (^)(BOOL))completionHandler {
    UIAlertController *alertController = [UIAlertController alertControllerWithTitle:@"Title"
                                                                             message:message
                                                                      preferredStyle:UIAlertControllerStyleAlert];

    [alertController addAction:[UIAlertAction actionWithTitle:@"OK"
                                                        style:UIAlertActionStyleDefault
                                                        handler:^(UIAlertAction *action) { completionHandler(YES); }]];

    [alertController addAction:[UIAlertAction actionWithTitle:@"Cancel"
                                                        style:UIAlertActionStyleCancel
                                                        handler:^(UIAlertAction *action) { completionHandler(NO); }]];
    
    [self presentViewController:alertController animated:YES completion:^{}];
}

- (void)iosBridge_bimsSiteSet {
    NSString* url_main_page = URL_MAIN_PAGE;
    NSMutableURLRequest *request = [[NSMutableURLRequest new] autorelease];
    [request setURL:[NSURL URLWithString:url_main_page]];
    [request setHTTPMethod:@"POST"];
    [request setValue:@"IOS" forHTTPHeaderField:@"app-device"];
#if TARGET==DEV
    [request setValue:@"DEV" forHTTPHeaderField:@"app-mod"];
#endif

#if TARGET==PROD
    [request setValue:@"PROD" forHTTPHeaderField:@"app-mod"];
#endif

#if TARGET==LOCAL
    [request setValue:@"LOCAL" forHTTPHeaderField:@"app-mod"];
#endif
        
    [self.main_webview loadRequest:request];
  }

- (void)iosBridge_userInfo {
    NSString* tempVersion = [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleShortVersionString"];
    
    // 앱 버전 전달
    NSMutableDictionary *dictionary = [[NSMutableDictionary alloc]init];
    [dictionary setValue:[NSString stringWithFormat:@"%@", tempVersion] forKey:@"version"];
    
    [dictionary setValue:[NSString stringWithFormat:@"%@", self.m_SBUserInfoVO.szBimsId] forKey:@"bims_id"];
    [dictionary setValue:[NSString stringWithFormat:@"%@", self.m_SBUserInfoVO.szBimsName] forKey:@"bims_name"];
    [dictionary setValue:[NSString stringWithFormat:@"%@", self.m_SBUserInfoVO.szBimsPwd] forKey:@"bims_pwd"];
    [dictionary setValue:[NSString stringWithFormat:@"%@", self.m_SBUserInfoVO.szBimsPgLimt] forKey:@"bims_pglimit"];
    [dictionary setValue:[NSString stringWithFormat:@"%@", self.m_SBUserInfoVO.szBimsOrgcode] forKey:@"bims_orgcode"];
    [dictionary setValue:[NSString stringWithFormat:@"%@", self.m_SBUserInfoVO.szBimsOrgname] forKey:@"bims_orgname"];
    [dictionary setValue:[NSString stringWithFormat:@"%@", self.m_SBUserInfoVO.szBimsDeptcode] forKey:@"bims_deptcode"];
    [dictionary setValue:[NSString stringWithFormat:@"%@", self.m_SBUserInfoVO.szBimsDeptname] forKey:@"bims_deptname"];
    [dictionary setValue:[NSString stringWithFormat:@"%@", self.m_SBUserInfoVO.szBimsSitecode] forKey:@"bims_sitecode"];
    [dictionary setValue:[NSString stringWithFormat:@"%@", self.m_SBUserInfoVO.szBimsSitename] forKey:@"bims_sitename"];
    [dictionary setValue:[NSString stringWithFormat:@"%@", self.m_SBUserInfoVO.szBimsCarcode] forKey:@"bims_carcode"];
    [dictionary setValue:[NSString stringWithFormat:@"%@", self.m_SBUserInfoVO.szBimsCarname] forKey:@"bims_carname"];
    [dictionary setValue:[NSString stringWithFormat:@"%@", self.m_SBUserInfoVO.szBimsDeptorders] forKey:@"bims_deptorders"];
    [dictionary setValue:[NSString stringWithFormat:@"%@", self.m_SBUserInfoVO.szMgrData] forKey:@"strMgrData"];
    
    NSString* key;
    for (key in dictionary) {
        NSLog(@"Key: %@, Value: %@", key, [dictionary valueForKey:key]);
    }
    
    NSData* jsonData = [NSJSONSerialization dataWithJSONObject:dictionary options:NSJSONWritingPrettyPrinted error:nil];
    NSString* jsonDataStr = [[NSString alloc] initWithData:jsonData encoding:NSUTF8StringEncoding];
    NSLog(@"jsonDicStr: %@", jsonDataStr);
    
    jsonDataStr = [jsonDataStr stringByReplacingOccurrencesOfString:@"\n" withString:@""];
    //jsonDataStr = [jsonDataStr stringByReplacingOccurrencesOfString:@"\"" withString:@"'"];
    
    NSString *javascript = [NSString stringWithFormat:@"getUserInfo(\'%@\')", jsonDataStr];
    [self.main_webview evaluateJavaScript:javascript completionHandler:nil];
}

- (void)iosBridge_goToLogout {
    double deviceHeight = self.view.frame.size.height;
    double deviceWidth = self.view.frame.size.width;
    
    self.m_SBUserInfoVO = nil;
    // 2022.05.25 ADD HMWOO 수거자 등록 대응
    self.takeOverInfoMap = nil;
    
    CGRect frame = CGRectMake(0, 0, deviceWidth, deviceHeight);
    self.view.frame = frame;
    
    [UIView beginAnimations:nil context:nil];
    [UIView setAnimationDuration:0.5];
    
    self.view.frame = CGRectMake(0, deviceWidth, deviceWidth, deviceHeight);
    
    //[self.view removeFromSuperview];
    [UIView commitAnimations];
    
    [NSTimer scheduledTimerWithTimeInterval:0.5
                                     target:self
                                   selector:@selector(logoutAction)
                                   userInfo:nil
                                    repeats:NO];
}

- (void)logoutAction
{
    NSUserDefaults *signDefaults = [NSUserDefaults standardUserDefaults];
    [signDefaults setValue:@"" forKey:@"userIdt"];
    [signDefaults setValue:@"" forKey:@"userPwt"];
    [signDefaults removeObjectForKey:@"isKeepSign"];
    [signDefaults synchronize];
    
    [m_target performSelector:m_selector];
    [self.view removeFromSuperview];
}

- (void)userContentController:(WKUserContentController *)userContentController didReceiveScriptMessage:(WKScriptMessage *)message {
    
    //현재까지는 메시지를 사용할 일이 없음 - 일단 주석 처리
    NSString *msg = message.body;
    
    if ( [[message name] isEqualToString:@"iosBridge"] ){
        
        if ( [msg isEqualToString:@"UserInfo"] ) {
            [self performSelector:@selector(iosBridge_userInfo)];
        }
        
        if ( [msg isEqualToString:@"GoToLogout"] ) {
            [self performSelector:@selector(iosBridge_goToLogout)];
        }
        
        NSRange range = [msg rangeOfString:@"BimsSiteSet:" options:NSRegularExpressionSearch];
        if (range.length == 12) {
            NSArray* tempMgrSite = [msg componentsSeparatedByString:@":"];
            NSInteger code = [[tempMgrSite objectAtIndex:1] intValue];
            NSArray* tempMgrDataArray = [m_SBUserInfoVO.szMgrData componentsSeparatedByString:@"|"];
            NSString* tempRowData = [NSString stringWithString:[tempMgrDataArray objectAtIndex:code]];
            NSArray* tempMgrDetailDataArray = [tempRowData componentsSeparatedByString:@":"];
            
            
            self.m_SBUserInfoVO.szBimsSitecode = [tempMgrDetailDataArray objectAtIndex:0];
            self.m_SBUserInfoVO.szBimsSitename = [tempMgrDetailDataArray objectAtIndex:1];
            self.m_SBUserInfoVO.szBimsCarcode = [tempMgrDetailDataArray objectAtIndex:2];
            self.m_SBUserInfoVO.szBimsCarname = [tempMgrDetailDataArray objectAtIndex:3];
            
            [self performSelector:@selector(iosBridge_bimsSiteSet)];
        }
    }
}

@end

