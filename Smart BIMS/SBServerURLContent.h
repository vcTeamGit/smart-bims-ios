/**
 * 프로젝트 내 URL을 개발 및 검수 용으로
 * 호출할 수 있도록 대응 (Objective C 에서 호출하는 URL)
 *
 * @author HMWOO
 * @version 1.0
 */

#define DEV 0
#define PROD 1
#define LOCAL 2

// 개발 DB 접근 시 TARGET을 DEV로 설정
// 상용 DB 접근 시 TARGET을 PROD로 설정
// DEV : 개발, PROD : 상용
#define TARGET DEV

#if TARGET==DEV

// 로그인 처리 URL => [ SBLoginViewController.m ]
#define URL_IDPW_LOGIN [NSString stringWithFormat:@"%@%@%@%@", @"http://", BLOOD_SERVER, SERVER_TARGET, @"/SBLoginProc.jsp"]

// 디바이스인증화면 → [ SBDeviceConfirmViewController.m ]
#define URL_DEVICE_CONFIRM [NSString stringWithFormat:@"%@%@%@%@", @"http://", BLOOD_SERVER, SERVER_TARGET, @"/SBDeviceConfirmService.jsp"]

// 메인 UI URL => [ SBWebViewController.m ]
#define URL_MAIN_PAGE [NSString stringWithFormat:@"%@%@%@", @"http://", BLOOD_SERVER, @"/mbims/sbview/sbmain/sbmain01.jsp"]

// 메인 UI URL => [ SBWebViewController.m ]
#define URL_MAIN_MGR [NSString stringWithFormat:@"%@%@%@", @"http://", BLOOD_SERVER, @"/mbims/sbview/sbmain/sbmainMgr.jsp"]

#endif

#if TARGET==PROD

// 로그인 처리 URL => [ SBLoginViewController.m ]
#define URL_IDPW_LOGIN [NSString stringWithFormat:@"%@%@%@%@", @"http://", BLOOD_SERVER, SERVER_TARGET, @"/SBLoginProc.jsp"]

// 디바이스인증화면 → [ SBDeviceConfirmViewController.m ]
#define URL_DEVICE_CONFIRM [NSString stringWithFormat:@"%@%@%@%@", @"http://", BLOOD_SERVER, SERVER_TARGET, @"/SBDeviceConfirmService.jsp"]

// 메인 UI URL => [ SBWebViewController.m ]
#define URL_MAIN_PAGE [NSString stringWithFormat:@"%@%@%@", @"http://", BLOOD_SERVER, @"/mbims/sbview/sbmain/sbmain01.jsp"]

// 메인 UI URL => [ SBWebViewController.m ]
#define URL_MAIN_MGR [NSString stringWithFormat:@"%@%@%@", @"http://", BLOOD_SERVER, @"/mbims/sbview/sbmain/sbmainMgr.jsp"]

#endif

#if TARGET==LOCAL
    
// 로그인 처리 URL => [ SBLoginViewController.m ]
#define URL_IDPW_LOGIN [NSString stringWithFormat:@"%@%@%@%@", @"http://", BLOOD_SERVER, SERVER_TARGET, @"/SBLoginProc.jsp"]

// 디바이스인증화면 → [ SBDeviceConfirmViewController.m ]
#define URL_DEVICE_CONFIRM [NSString stringWithFormat:@"%@%@%@%@", @"http://", BLOOD_SERVER, SERVER_TARGET, @"/SBDeviceConfirmService.jsp"]

// 메인 UI URL => [ SBWebViewController.m ]
#define URL_MAIN_PAGE [NSString stringWithFormat:@"%@%@%@", @"http://", BLOOD_SERVER, @"/sbview/sbmain/sbmain01.jsp"]

// 메인 UI URL => [ SBWebViewController.m ]
#define URL_MAIN_MGR [NSString stringWithFormat:@"%@%@%@", @"http://", BLOOD_SERVER, @"/sbview/sbmain/sbmainMgr.jsp"]

#endif



@interface SBServerURLContent : NSObject

extern NSString *BLOOD_SERVER;

extern NSString *SERVER_TARGET;

// 인계 혈액 등록화면에서 혈액등록, 등록혈액삭제 등을 관리하는 URL => [ BloodRegisterURLInfo.swift ]
// 수행 시 INSERT, DELETE 처리 수행되므로 주의
extern NSString *URL_MANAGE_TAKEOVER_BLOOD;

// 혈액 인계 정보 조회 화면에서 인계 혈액 정보를 취득하는 URL => [ BloodRegisterURLInfo.swift ]
extern NSString *URL_GET_TAKEOVER_BLOOD_INFO;

@end
