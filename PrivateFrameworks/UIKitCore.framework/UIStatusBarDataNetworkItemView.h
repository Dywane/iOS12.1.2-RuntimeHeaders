/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIStatusBarDataNetworkItemView : UIStatusBarItemView {
    int  _dataNetworkType;
    bool  _enableRSSI;
    bool  _showRSSI;
    bool  _wifiLinkWarning;
    int  _wifiStrengthBars;
    int  _wifiStrengthRaw;
}

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (id)_dataNetworkImage;
- (id)_dataNetworkImageName;
- (id)_stringForRSSI;
- (bool)_updateWithData:(struct { bool x1[41]; BOOL x2[64]; BOOL x3[64]; BOOL x4[256]; int x5; int x6; int x7; int x8; BOOL x9[100]; BOOL x10[100]; BOOL x11[100]; BOOL x12[100]; BOOL x13[2][100]; BOOL x14[1024]; unsigned int x15; unsigned int x16; int x17; int x18; unsigned int x19; unsigned int x20; int x21; unsigned int x22; BOOL x23[150]; int x24; int x25; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28 : 1; BOOL x29[256]; unsigned int x30 : 1; unsigned int x31 : 1; unsigned int x32 : 1; unsigned int x33 : 1; unsigned int x34 : 1; unsigned int x35; unsigned int x36 : 1; unsigned int x37 : 1; unsigned int x38 : 1; BOOL x39[256]; BOOL x40[256]; BOOL x41[100]; unsigned int x42 : 1; unsigned int x43 : 1; unsigned int x44 : 1; double x45; unsigned int x46 : 1; unsigned int x47 : 1; BOOL x48[100]; BOOL x49[100]; }*)arg1 networkType:(int)arg2;

// Image: /Developer/usr/lib/libMainThreadChecker.dylib

- (id)accessibilityHUDRepresentation;
- (id)contentsImage;
- (double)extraLeftPadding;
- (double)extraRightPadding;
- (double)maximumOverlap;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (bool)updateForNewData:(id)arg1 actions:(int)arg2;

@end
