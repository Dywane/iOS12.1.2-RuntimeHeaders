/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSWebProcessPlugInPageController : NSObject <WKWebProcessPlugInLoadDelegate> {
    WKWebProcessPlugInBrowserContextController * _browserContextController;
    WBSWebProcessPlugIn * _webProcessPlugIn;
}

@property (nonatomic, readonly) WKWebProcessPlugInBrowserContextController *browserContextController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) WKWebProcessPlugInFrame *mainFrame;
@property (readonly) Class superclass;
@property (nonatomic, readonly) WBSWebProcessPlugIn *webProcessPlugIn;

- (void).cxx_destruct;
- (id)browserContextController;
- (id)init;
- (id)initWithPlugIn:(id)arg1 contextController:(id)arg2;
- (id)mainFrame;
- (id)requestIfDoNotTrackEnabled:(id)arg1;
- (id)webProcessPlugIn;
- (void)willDestroyBrowserContextController:(id)arg1;

@end
