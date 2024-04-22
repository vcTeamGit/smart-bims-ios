/**
 * 프로젝트 내 URL을 개발 및 검수 용으로
 * 호출할 수 있도록 대응 (Swift 에서 호출하는 URL)
 *
 * @author HMWOO
 * @version 1.0
 */

#import "SBServerURLContent.h"

@implementation SBServerURLContent


#if TARGET==DEV
    NSString const *BLOOD_SERVER = @"mbims.bloodinfo.net:59999";
    NSString const *SERVER_TARGET = @"/mbims/testservice";
#endif

#if TARGET==PROD
    NSString const *BLOOD_SERVER = @"mbims.bloodinfo.net:59999";
    NSString const *SERVER_TARGET = @"/mbims/appservice";
#endif

#if TARGET==LOCAL
    NSString const *BLOOD_SERVER = @"localhost:8080/smart_bims";
    NSString const *SERVER_TARGET = @"/mbims/testservice";
#endif

@end
