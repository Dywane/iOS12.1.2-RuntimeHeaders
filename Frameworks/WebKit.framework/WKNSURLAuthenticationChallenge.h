/* Generated by EzioChiu
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKNSURLAuthenticationChallenge : WKObject

- (struct AuthenticationChallengeProxy { int (**x1)(); id x2; /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x3; void*x4; void*x5; void*x6; in void*x7; int x8; BOOL x9; void*x10; void*x11; int x12; out in unsigned char x13; void*x14; void*x15; long x16; long x17; void*x18; in void*x19; void*x20; void*x21; bool x22; struct ProtectionSpace { struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_23_1_1; int x_23_1_2; int x_23_1_3; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_3_1; } x_4_2_1; } x_23_1_4; int x_23_1_5; bool x_23_1_6; struct RetainPtr<NSURLProtectionSpace> { void *x_7_2_1; } x_23_1_7; } x23; struct Credential { struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_24_1_1; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_3_1; } x_2_2_1; } x_24_1_2; int x_24_1_3; struct RetainPtr<NSURLCredential> { void *x_4_2_1; } x_24_1_4; } x24; }*)_web_authenticationChallengeProxy;
- (id)_web_createTarget;

@end
