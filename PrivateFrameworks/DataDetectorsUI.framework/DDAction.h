/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
 */

@interface DDAction : NSObject <NSCoding, NSSecureCoding> {
    struct __CFArray { } * _associatedResults;
    bool  _cachedAssociatedResults;
    bool  _cachedCoalescedResult;
    struct __DDResult { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x_1_2_1 : 32; unsigned int x_1_2_2 : 32; } x_2_1_1; struct __DDQueryOffset { unsigned int x_2_2_1 : 32; unsigned int x_2_2_2 : 32; } x_2_1_2; } x2; struct { long long x_3_1_1; long long x_3_1_2; } x3; long long x4; struct __CFArray {} *x5; struct __CFString {} *x6; struct __CFString {} *x7; void *x8; struct __CFDictionary {} *x9; long long x10; unsigned char x11; float x12; } * _coalescedResult;
    bool  _companion;
    CNContact * _contact;
    NSDictionary * _context;
    NSObject<DDActionDelegate> * _delegate;
    int  _hostApplication;
    NSString * _ics;
    bool  _isDefaultAction;
    struct __DDResult { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x_1_2_1 : 32; unsigned int x_1_2_2 : 32; } x_2_1_1; struct __DDQueryOffset { unsigned int x_2_2_1 : 32; unsigned int x_2_2_2 : 32; } x_2_1_2; } x2; struct { long long x_3_1_1; long long x_3_1_2; } x3; long long x4; struct __CFArray {} *x5; struct __CFString {} *x6; struct __CFString {} *x7; void *x8; struct __CFDictionary {} *x9; long long x10; unsigned char x11; float x12; } * _result;
    NSURL * _url;
    UIViewController * _viewController;
}

@property (nonatomic) bool companion;
@property (nonatomic, readonly) DDAction *companionAction;
@property (retain) CNContact *contact;
@property (nonatomic) NSObject<DDActionDelegate> *delegate;
@property int hostApplication;
@property bool isDefaultAction;
@property (nonatomic, retain) UIViewController *viewController;

+ (bool)actionAvailableForContact:(id)arg1;
+ (id)actionWithURL:(id)arg1 result:(struct __DDResult { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x_1_2_1 : 32; unsigned int x_1_2_2 : 32; } x_2_1_1; struct __DDQueryOffset { unsigned int x_2_2_1 : 32; unsigned int x_2_2_2 : 32; } x_2_1_2; } x2; struct { long long x_3_1_1; long long x_3_1_2; } x3; long long x4; struct __CFArray {} *x5; struct __CFString {} *x6; struct __CFString {} *x7; void *x8; struct __CFDictionary {} *x9; long long x10; unsigned char x11; float x12; }*)arg2 context:(id)arg3;
+ (id)actionsWithURL:(id)arg1 result:(struct __DDResult { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x_1_2_1 : 32; unsigned int x_1_2_2 : 32; } x_2_1_1; struct __DDQueryOffset { unsigned int x_2_2_1 : 32; unsigned int x_2_2_2 : 32; } x_2_1_2; } x2; struct { long long x_3_1_1; long long x_3_1_2; } x3; long long x4; struct __CFArray {} *x5; struct __CFString {} *x6; struct __CFString {} *x7; void *x8; struct __CFDictionary {} *x9; long long x10; unsigned char x11; float x12; }*)arg2 context:(id)arg3;
+ (id)clientActionsDelegate;
+ (id)contextByAddingValue:(id)arg1 toKey:(id)arg2 inContext:(id)arg3;
+ (id)defaultActionWithURL:(id)arg1 result:(struct __DDResult { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x_1_2_1 : 32; unsigned int x_1_2_2 : 32; } x_2_1_1; struct __DDQueryOffset { unsigned int x_2_2_1 : 32; unsigned int x_2_2_2 : 32; } x_2_1_2; } x2; struct { long long x_3_1_1; long long x_3_1_2; } x3; long long x4; struct __CFArray {} *x5; struct __CFString {} *x6; struct __CFString {} *x7; void *x8; struct __CFDictionary {} *x9; long long x10; unsigned char x11; float x12; }*)arg2 context:(id)arg3;
+ (id)encodableContextWithContext:(id)arg1;
+ (bool)isAvailable;
+ (void)setClientActionsDelegate:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_copyStringOnly:(id)arg1;
- (void)_copyURL:(id)arg1;
- (void)_copyURL:(id)arg1 andString:(id)arg2;
- (void)_performFromView:(id)arg1 byOpeningURL:(id)arg2;
- (void)adaptForPresentationInPopover:(bool)arg1;
- (void)addToRecents;
- (const struct __CFArray { }*)associatedResults;
- (bool)canBePerformedByOpeningURL;
- (bool)canBePerformedWhenDeviceIsLocked;
- (struct __DDResult { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x_1_2_1 : 32; unsigned int x_1_2_2 : 32; } x_2_1_1; struct __DDQueryOffset { unsigned int x_2_2_1 : 32; unsigned int x_2_2_2 : 32; } x_2_1_2; } x2; struct { long long x_3_1_1; long long x_3_1_2; } x3; long long x4; struct __CFArray {} *x5; struct __CFString {} *x6; struct __CFString {} *x7; void *x8; struct __CFDictionary {} *x9; long long x10; unsigned char x11; float x12; }*)coalescedResult;
- (bool)companion;
- (id)companionAction;
- (id)contact;
- (id)context;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)displayNameForEmails:(id)arg1 phoneNumbers:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasUserInterface;
- (int)hostApplication;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 result:(struct __DDResult { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x_1_2_1 : 32; unsigned int x_1_2_2 : 32; } x_2_1_1; struct __DDQueryOffset { unsigned int x_2_2_1 : 32; unsigned int x_2_2_2 : 32; } x_2_1_2; } x2; struct { long long x_3_1_1; long long x_3_1_2; } x3; long long x4; struct __CFArray {} *x5; struct __CFString {} *x6; struct __CFString {} *x7; void *x8; struct __CFDictionary {} *x9; long long x10; unsigned char x11; float x12; }*)arg2 context:(id)arg3;
- (int)interactionType;
- (void)invalidate;
- (bool)isDefaultAction;
- (id)localizedName;
- (id)notificationIconBundleIdentifier;
- (id)notificationTitle;
- (id)notificationURL;
- (void)perform;
- (void)performFromView:(id)arg1;
- (void)prepareViewControllerForActionController:(id)arg1;
- (struct __DDResult { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x_1_2_1 : 32; unsigned int x_1_2_2 : 32; } x_2_1_1; struct __DDQueryOffset { unsigned int x_2_2_1 : 32; unsigned int x_2_2_2 : 32; } x_2_1_2; } x2; struct { long long x_3_1_1; long long x_3_1_2; } x3; long long x4; struct __CFArray {} *x5; struct __CFString {} *x6; struct __CFString {} *x7; void *x8; struct __CFDictionary {} *x9; long long x10; unsigned char x11; float x12; }*)result;
- (void)setCompanion:(bool)arg1;
- (void)setContact:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHostApplication:(int)arg1;
- (void)setIsDefaultAction:(bool)arg1;
- (void)setViewController:(id)arg1;
- (id)url;
- (id)viewController;

@end
