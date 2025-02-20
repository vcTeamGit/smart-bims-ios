/*=============================================================================================================
 - mVaccine.h
 =============================================================================================================*/
#import <CommonCrypto/CommonHMAC.h>
#import <Foundation/Foundation.h>
@class ffc8943a;

@interface ffc8943a : NSObject

// 싱글톤 객체 리턴
+ (ffc8943a*)sharedInstance;

// jailBreak 체크 후 앱 종료
- (void)mvcx:(int) seconds;
- (void)mvcs;
- (NSString *)setConectCable:(int) seconds;
- (NSString *)setDisplayReplay;

// jailBreak 체크
- (BOOL)mvc;
- (BOOL)mvcd;

-(void )showAlert:(NSString *)name;
-(NSData* )ftCb18ftfce8ce8deaa0tB;
-(NSData* )getk;
- (NSString *) tk_aa0tB69aa0tB8b18ftfce8deA:(const char *)t;
- (NSString *)tk_fce8detB8aa0tB69aa0b18ftC:(int) ax_dt:(NSString*)ax_prefix:(NSString*)ax_postFix;
@property (retain) NSString *jbt;
@property (retain) NSString *jbmg;

@property (nonatomic) int   nTerminalTime;
@property (readonly, retain, nonatomic) NSString *strVersion;

@end

#define MAX_FUN 9

#define B8b18943_aa0tB() \
ffc8943a *e8db18ftfc0etB8a=[ffc8943a sharedInstance ];[e8db18ftfc0etB8a setNTerminalTime:10];NSData *mvcResult=[e8db18ftfc0etB8a ftCb18ftfce8ce8deaa0tB];\
BOOL tk_a0etB8aace8det=true;time_t mvcCurrentTime=time(nil);\
if(mvcResult!=nil) {\
if([mvcResult length]==5) \
tk_a0etB8aace8det=true; \
else {\
for(int i=0;i<20;i++) {\
char mvcMacKey[MVC_MML]={0,},mmvcMac[MVC_MML]={0,};NSString *mvcAppID = [[NSBundle mainBundle] bundleIdentifier];\
NSData *mvcAppIDData = [mvcAppID dataUsingEncoding:NSUTF8StringEncoding];NSData *mvcKData = [e8db18ftfc0etB8a getk];\
CCHmac(kCCHmacAlgSHA256, [mvcKData bytes], MVC_MKL, [mvcAppIDData bytes], [mvcAppIDData length] , mvcMacKey);\
CCHmac(kCCHmacAlgSHA256, mvcMacKey, MVC_MKL, &mvcCurrentTime, sizeof(mvcCurrentTime) , mmvcMac);\
if(memcmp(mmvcMac, [mvcResult bytes], MVC_MML)==0){tk_a0etB8aace8det=false; break;} mvcCurrentTime--;\
}\
if(tk_a0etB8aace8det==true) {\
exit(1); \
}\
}\
}\
else\
{exit(1);}\


#define MVC_MML 32
#define MVC_MKL 16




#define f9aabep843a(tk_data) \
const char tk_ffkff980l[MAX_FUN][512] = {"-[ffc8943a setDisplayReplay]","-[ffc8943a ffc843a_cs::]","-[ffc8943a f9a96ce8d0::]","-[ffc8943a e0ftf9ace8d:::]","-[ffc8943a ace8de0ftf9]","-[ffc8943a tB8b1869aace8de0ftfA::]","-[ffc8943a caseToBySelect:]","-[ffc8943a e0ftf9ace8d:::]","-[ffc8943a D7ffinsh69aace8d::]"};NSString *tk_nsh69aa = nil;NSString *tk_cD7fe8d = nil;NSString *tk_a8de0ft8Gtf9a = nil;BOOL tk_ff0009990aabepi = false;NSArray *tk_ae0f00 = [tk_data componentsSeparatedByString:@"__"];if ([tk_ae0f00 count] != 2){exit(1);}NSString *tk_f9aat8Gtf9a8de0f = [tk_ae0f00 objectAtIndex:0];NSString *tk_f9a8de0ftemp = [tk_ae0f00 objectAtIndex:1];int tk_f9a8de = [tk_f9a8de0ftemp intValue];tk_cD7fe8d = [e8db18ftfc0etB8a tk_aa0tB69aa0tB8b18ftfce8deA:tk_ffkff980l[0]];tk_a8de0ft8Gtf9a = [NSString stringWithFormat:@"%s",tk_ffkff980l[1]];tk_nsh69aa = [e8db18ftfc0etB8a tk_fce8detB8aa0tB69aa0b18ftC:5:tk_cD7fe8d: tk_a8de0ft8Gtf9a];for (int i=0; i < tk_f9a8de+1; i++)tk_nsh69aa = [e8db18ftfc0etB8a tk_aa0tB69aa0tB8b18ftfce8deA:[tk_nsh69aa UTF8String]];tk_a8de0ft8Gtf9a = [NSString stringWithFormat:@"%s",tk_ffkff980l[2]];tk_nsh69aa = [e8db18ftfc0etB8a tk_fce8detB8aa0tB69aa0b18ftC:15:tk_nsh69aa: tk_a8de0ft8Gtf9a];for (int i=0; i < tk_f9a8de+2; i++)tk_nsh69aa = [e8db18ftfc0etB8a tk_aa0tB69aa0tB8b18ftfce8deA:[tk_nsh69aa UTF8String]];tk_a8de0ft8Gtf9a = [NSString stringWithFormat:@"%s",tk_ffkff980l[3]];tk_nsh69aa = [e8db18ftfc0etB8a tk_fce8detB8aa0tB69aa0b18ftC:15:tk_nsh69aa: tk_a8de0ft8Gtf9a];for (int i=0; i < tk_f9a8de+3; i++)tk_nsh69aa = [e8db18ftfc0etB8a tk_aa0tB69aa0tB8b18ftfce8deA:[tk_nsh69aa UTF8String]];tk_a8de0ft8Gtf9a = [NSString stringWithFormat:@"%s",tk_ffkff980l[4]];tk_nsh69aa = [e8db18ftfc0etB8a tk_fce8detB8aa0tB69aa0b18ftC:15:tk_nsh69aa: tk_a8de0ft8Gtf9a];for (int i=0; i < tk_f9a8de+4; i++)tk_nsh69aa = [e8db18ftfc0etB8a tk_aa0tB69aa0tB8b18ftfce8deA:[tk_nsh69aa UTF8String]]; \
tk_a8de0ft8Gtf9a = [NSString stringWithFormat:@"%s",tk_ffkff980l[5]];tk_nsh69aa = [e8db18ftfc0etB8a tk_fce8detB8aa0tB69aa0b18ftC:15:tk_nsh69aa: tk_a8de0ft8Gtf9a];for (int i=0; i < tk_f9a8de+4; i++)tk_nsh69aa = [e8db18ftfc0etB8a tk_aa0tB69aa0tB8b18ftfce8deA:[tk_nsh69aa UTF8String]];tk_a8de0ft8Gtf9a = [NSString stringWithFormat:@"%s",tk_ffkff980l[6]];tk_nsh69aa = [e8db18ftfc0etB8a tk_fce8detB8aa0tB69aa0b18ftC:15:tk_nsh69aa: tk_a8de0ft8Gtf9a];for (int i=0; i < tk_f9a8de+5; i++)tk_nsh69aa = [e8db18ftfc0etB8a tk_aa0tB69aa0tB8b18ftfce8deA:[tk_nsh69aa UTF8String]];tk_a8de0ft8Gtf9a = [NSString stringWithFormat:@"%s",tk_ffkff980l[7]];tk_nsh69aa = [e8db18ftfc0etB8a tk_fce8detB8aa0tB69aa0b18ftC:15:tk_nsh69aa: tk_a8de0ft8Gtf9a];for (int i=0; i < tk_f9a8de+6; i++)tk_nsh69aa = [e8db18ftfc0etB8a tk_aa0tB69aa0tB8b18ftfce8deA:[tk_nsh69aa UTF8String]];NSTimeInterval tk_sB8b18de0ft869aac = [[NSDate date] timeIntervalSince1970];NSString *tk_xeF6ce8 = [NSString stringWithFormat:@"%u", tk_sB8b18de0ft869aac];tk_a8de0ft8Gtf9a = [NSString stringWithFormat:@"%s",tk_ffkff980l[8]];long tk_a8de0ft8Gtf9a_00f = (long)(NSTimeInterval)([[NSDate date] timeIntervalSince1970]) + 1;long tk_a8de0ft8Gtf9a_009 = tk_a8de0ft8Gtf9a_00f - 20;NSString *tk_jdkjekHHHk = tk_nsh69aa; \
while(tk_a8de0ft8Gtf9a_00f > tk_a8de0ft8Gtf9a_009){tk_nsh69aa = tk_jdkjekHHHk;NSString *intervalString = [NSString stringWithFormat:@"%u", tk_a8de0ft8Gtf9a_00f];tk_a8de0ft8Gtf9a = [NSString stringWithFormat:@"%s%@", tk_ffkff980l[8], intervalString];tk_nsh69aa = [e8db18ftfc0etB8a tk_fce8detB8aa0tB69aa0b18ftC:15:tk_nsh69aa: tk_a8de0ft8Gtf9a];for (int i=0; i < tk_f9a8de+7; i++)tk_nsh69aa = [e8db18ftfc0etB8a tk_aa0tB69aa0tB8b18ftfce8deA:[tk_nsh69aa UTF8String]];if ( [tk_f9aat8Gtf9a8de0f isEqualToString:tk_nsh69aa]){tk_ff0009990aabepi = true;break;}tk_a8de0ft8Gtf9a_00f--;} if (tk_ff0009990aabepi == false){exit(1);}

#define f9aabep843b(tk_data) \
const char tk_ffkff980l[MAX_FUN][512] = {"-[ffc8943a setConectCable:]","-[ffc8943a ffc843a_cs::]","-[ffc8943a f9a96ce8d0::]","-[ffc8943a e0ftf9ace8d:::]","-[ffc8943a ace8de0ftf9]","-[ffc8943a tB8b1869aace8de0ftfA::]","-[ffc8943a caseToBySelect:]","-[ffc8943a e0ftf9ace8d:::]","-[ffc8943a D7ffinsh69aace8d::]"};NSString *tk_nsh69aa = nil;NSString *tk_cD7fe8d = nil;NSString *tk_a8de0ft8Gtf9a = nil;BOOL tk_ff0009990aabepi = false;NSArray *tk_ae0f00 = [tk_data componentsSeparatedByString:@"__"];if ([tk_ae0f00 count] != 2){exit(1);}NSString *tk_f9aat8Gtf9a8de0f = [tk_ae0f00 objectAtIndex:0];NSString *tk_f9a8de0ftemp = [tk_ae0f00 objectAtIndex:1];int tk_f9a8de = [tk_f9a8de0ftemp intValue];tk_cD7fe8d = [e8db18ftfc0etB8a tk_aa0tB69aa0tB8b18ftfce8deA:tk_ffkff980l[0]];tk_a8de0ft8Gtf9a = [NSString stringWithFormat:@"%s",tk_ffkff980l[1]];tk_nsh69aa = [e8db18ftfc0etB8a tk_fce8detB8aa0tB69aa0b18ftC:5:tk_cD7fe8d: tk_a8de0ft8Gtf9a];for (int i=0; i < tk_f9a8de+1; i++)tk_nsh69aa = [e8db18ftfc0etB8a tk_aa0tB69aa0tB8b18ftfce8deA:[tk_nsh69aa UTF8String]];tk_a8de0ft8Gtf9a = [NSString stringWithFormat:@"%s",tk_ffkff980l[2]];tk_nsh69aa = [e8db18ftfc0etB8a tk_fce8detB8aa0tB69aa0b18ftC:15:tk_nsh69aa: tk_a8de0ft8Gtf9a];for (int i=0; i < tk_f9a8de+2; i++)tk_nsh69aa = [e8db18ftfc0etB8a tk_aa0tB69aa0tB8b18ftfce8deA:[tk_nsh69aa UTF8String]];tk_a8de0ft8Gtf9a = [NSString stringWithFormat:@"%s",tk_ffkff980l[3]];tk_nsh69aa = [e8db18ftfc0etB8a tk_fce8detB8aa0tB69aa0b18ftC:15:tk_nsh69aa: tk_a8de0ft8Gtf9a];for (int i=0; i < tk_f9a8de+3; i++)tk_nsh69aa = [e8db18ftfc0etB8a tk_aa0tB69aa0tB8b18ftfce8deA:[tk_nsh69aa UTF8String]];tk_a8de0ft8Gtf9a = [NSString stringWithFormat:@"%s",tk_ffkff980l[4]];tk_nsh69aa = [e8db18ftfc0etB8a tk_fce8detB8aa0tB69aa0b18ftC:15:tk_nsh69aa: tk_a8de0ft8Gtf9a];for (int i=0; i < tk_f9a8de+4; i++)tk_nsh69aa = [e8db18ftfc0etB8a tk_aa0tB69aa0tB8b18ftfce8deA:[tk_nsh69aa UTF8String]]; \
tk_a8de0ft8Gtf9a = [NSString stringWithFormat:@"%s",tk_ffkff980l[5]];tk_nsh69aa = [e8db18ftfc0etB8a tk_fce8detB8aa0tB69aa0b18ftC:15:tk_nsh69aa: tk_a8de0ft8Gtf9a];for (int i=0; i < tk_f9a8de+4; i++)tk_nsh69aa = [e8db18ftfc0etB8a tk_aa0tB69aa0tB8b18ftfce8deA:[tk_nsh69aa UTF8String]];tk_a8de0ft8Gtf9a = [NSString stringWithFormat:@"%s",tk_ffkff980l[6]];tk_nsh69aa = [e8db18ftfc0etB8a tk_fce8detB8aa0tB69aa0b18ftC:15:tk_nsh69aa: tk_a8de0ft8Gtf9a];for (int i=0; i < tk_f9a8de+5; i++)tk_nsh69aa = [e8db18ftfc0etB8a tk_aa0tB69aa0tB8b18ftfce8deA:[tk_nsh69aa UTF8String]];tk_a8de0ft8Gtf9a = [NSString stringWithFormat:@"%s",tk_ffkff980l[7]];tk_nsh69aa = [e8db18ftfc0etB8a tk_fce8detB8aa0tB69aa0b18ftC:15:tk_nsh69aa: tk_a8de0ft8Gtf9a];for (int i=0; i < tk_f9a8de+6; i++)tk_nsh69aa = [e8db18ftfc0etB8a tk_aa0tB69aa0tB8b18ftfce8deA:[tk_nsh69aa UTF8String]];NSTimeInterval tk_sB8b18de0ft869aac = [[NSDate date] timeIntervalSince1970];NSString *tk_xeF6ce8 = [NSString stringWithFormat:@"%u", tk_sB8b18de0ft869aac];tk_a8de0ft8Gtf9a = [NSString stringWithFormat:@"%s",tk_ffkff980l[8]];long tk_a8de0ft8Gtf9a_00f = (long)(NSTimeInterval)([[NSDate date] timeIntervalSince1970]) + 1;long tk_a8de0ft8Gtf9a_009 = tk_a8de0ft8Gtf9a_00f - 20;NSString *tk_jdkjekHHHk = tk_nsh69aa; \
while(tk_a8de0ft8Gtf9a_00f > tk_a8de0ft8Gtf9a_009){tk_nsh69aa = tk_jdkjekHHHk;NSString *intervalString = [NSString stringWithFormat:@"%u", tk_a8de0ft8Gtf9a_00f];tk_a8de0ft8Gtf9a = [NSString stringWithFormat:@"%s%@", tk_ffkff980l[8], intervalString];tk_nsh69aa = [e8db18ftfc0etB8a tk_fce8detB8aa0tB69aa0b18ftC:15:tk_nsh69aa: tk_a8de0ft8Gtf9a];for (int i=0; i < tk_f9a8de+7; i++)tk_nsh69aa = [e8db18ftfc0etB8a tk_aa0tB69aa0tB8b18ftfce8deA:[tk_nsh69aa UTF8String]];if ( [tk_f9aat8Gtf9a8de0f isEqualToString:tk_nsh69aa]){tk_ff0009990aabepi = true;break;}tk_a8de0ft8Gtf9a_00f--;} if (tk_ff0009990aabepi == false){ exit(1);}


