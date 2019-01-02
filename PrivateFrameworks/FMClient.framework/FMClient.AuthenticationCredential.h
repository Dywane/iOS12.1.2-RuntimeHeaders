/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/FMClient.framework/FMClient
 */

@interface FMClient.AuthenticationCredential : NSObject <NSSecureCoding> {
    void authToken;
    void hostName;
    void personId;
}

@property (nonatomic, readonly) NSString *authToken;
@property (nonatomic, readonly) NSString *hostName;
@property (nonatomic, readonly) NSString *personId;

+ (bool)supportsSecureCoding;

- (id /* block */).cxx_destruct;
- (id)authToken;
- (void)encodeWithCoder:(id)arg1;
- (id)hostName;
- (id)init;
- (id)initWithAuthToken:(id)arg1 personId:(id)arg2 hostName:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)personId;

@end
