/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@interface SBSRemoteAlertConfigurationContext : NSObject <BSXPCCoding, NSSecureCoding> {
    NSSet * _actions;
    NSDictionary * _userInfo;
    NSObject<OS_xpc_object> * _xpcEndpoint;
}

@property (nonatomic, retain) NSSet *actions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSDictionary *userInfo;
@property (nonatomic, retain) NSObject<OS_xpc_object> *xpcEndpoint;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actions;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (void)setActions:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setXpcEndpoint:(id)arg1;
- (id)userInfo;
- (id)xpcEndpoint;

@end
