/* Generated by EzioChiu
   Image: /System/Library/Frameworks/NotificationCenter.framework/NotificationCenter
 */

@interface NCSizeObservingView : UIView {
    <NCSizeObservingViewDelegate> * _delegate;
    bool  _delegateInterestedInSizeChanges;
}

@property (nonatomic) <NCSizeObservingViewDelegate> *delegate;

- (void).cxx_destruct;
- (id)delegate;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
