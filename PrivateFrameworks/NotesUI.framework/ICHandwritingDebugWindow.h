/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

@interface ICHandwritingDebugWindow : UIWindow {
    bool  _draggingWindow;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialTouchLocation;
    UIView * _resizeTriangle;
    bool  _resizingWindow;
}

@property (getter=isDraggingWindow, nonatomic) bool draggingWindow;
@property (nonatomic) <ICHandwritingDebugDelegate> *handwritingDebugDelegate;
@property (nonatomic) struct CGPoint { double x1; double x2; } initialTouchLocation;
@property (nonatomic, retain) UIView *resizeTriangle;
@property (getter=isResizingWindow, nonatomic) bool resizingWindow;

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })preferredFrame;
+ (void)savePreferredFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

- (void).cxx_destruct;
- (id)handwritingDebugDelegate;
- (id)handwritingDebugViewController;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGPoint { double x1; double x2; })initialTouchLocation;
- (bool)isDraggingWindow;
- (bool)isResizingWindow;
- (void)layoutSubviews;
- (id)navigationController;
- (void)refresh;
- (id)resizeTriangle;
- (void)setDraggingWindow:(bool)arg1;
- (void)setHandwritingDebugDelegate:(id)arg1;
- (void)setInitialTouchLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setResizeTriangle:(id)arg1;
- (void)setResizingWindow:(bool)arg1;
- (void)sharedInit;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)updateResizeTriangleFrame;

@end
