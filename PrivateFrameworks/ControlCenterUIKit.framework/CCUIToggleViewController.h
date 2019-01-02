/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
 */

@interface CCUIToggleViewController : CCUIButtonModuleViewController <CCUIContentModuleContentViewController> {
    UIImage * _glyphImage;
    UIImageView * _glyphImageView;
    CCUICAPackageDescription * _glyphPackageDescription;
    NSString * _glyphState;
    CCUIToggleModule * _module;
    UIColor * _selectedColor;
    UIImage * _selectedGlyphImage;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) CCUIToggleModule *module;
@property (nonatomic, readonly) double preferredExpandedContentHeight;
@property (nonatomic, readonly) double preferredExpandedContentWidth;
@property (nonatomic, readonly) bool providesOwnPlatter;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)buttonTapped:(id)arg1 forEvent:(id)arg2;
- (id)module;
- (double)preferredExpandedContentHeight;
- (void)reconfigureView;
- (void)refreshState;
- (void)setModule:(id)arg1;
- (bool)shouldFinishTransitionToExpandedContentModule;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
