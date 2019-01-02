/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
 */

@interface PRSAnonymousPipelineManagerSession : PRSAnonymousPipelineManager {
    PARSession * _session;
}

@property (nonatomic, retain) PARSession *session;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)init;
- (void)sendCustomFeedback:(id)arg1;
- (id)session;
- (void)setFeedbackDelegate:(id)arg1;
- (void)setPARSession:(id)arg1;
- (void)setSession:(id)arg1;

@end
