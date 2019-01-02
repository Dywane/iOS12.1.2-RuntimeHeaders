/* Generated by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKUIDeclineCommentController : NSObject {
    UIAlertView * _alertView;
    id /* block */  _completionBlock;
}

+ (id)_newDeclineCommentControllerWithCompletionBlock:(id /* block */)arg1;
+ (id)presentDeclineCommentAlertWithOrganizer:(id)arg1 currentComment:(id)arg2 completionBlock:(id /* block */)arg3;

- (void).cxx_destruct;
- (void)_completeWithButtonIndex:(long long)arg1 animated:(bool)arg2;
- (void)_presentAlertWithOrganizer:(id)arg1 currentComment:(id)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)dealloc;
- (void)dismissAnimated:(bool)arg1;

@end
