/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXWebContentLogMessageHandler : NSObject <SXWebContentMessageHandler> {
    <SXWebContentLogger> * _logger;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SXWebContentLogger> *logger;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)allowLogFromSecurityOrigin:(id)arg1;
- (void)didReceiveMessage:(id)arg1 securityOrigin:(id)arg2;
- (id)initWithLogger:(id)arg1;
- (id)logger;

@end
