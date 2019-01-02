/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface __NSConcreteURLComponents : NSURLComponents <NSCopying> {
    struct __CFURLComponents { } * _components;
}

+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;

- (id)URL;
- (id)URLRelativeToURL:(id)arg1;
- (struct __CFURLComponents { }*)__cfComponents;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)fragment;
- (unsigned long long)hash;
- (id)host;
- (id)init;
- (id)initWithString:(id)arg1;
- (id)initWithURL:(id)arg1 resolvingAgainstBaseURL:(bool)arg2;
- (bool)isEqual:(id)arg1;
- (id)password;
- (id)path;
- (id)percentEncodedFragment;
- (id)percentEncodedHost;
- (id)percentEncodedPassword;
- (id)percentEncodedPath;
- (id)percentEncodedQuery;
- (id)percentEncodedQueryItems;
- (id)percentEncodedUser;
- (id)port;
- (id)query;
- (id)queryItems;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfFragment;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfHost;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfPassword;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfPath;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfPort;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfQuery;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfScheme;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfUser;
- (id)scheme;
- (void)setFragment:(id)arg1;
- (void)setHost:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setPath:(id)arg1;
- (void)setPercentEncodedFragment:(id)arg1;
- (void)setPercentEncodedHost:(id)arg1;
- (void)setPercentEncodedPassword:(id)arg1;
- (void)setPercentEncodedPath:(id)arg1;
- (void)setPercentEncodedQuery:(id)arg1;
- (void)setPercentEncodedQueryItems:(id)arg1;
- (void)setPercentEncodedUser:(id)arg1;
- (void)setPort:(id)arg1;
- (void)setQuery:(id)arg1;
- (void)setQueryItems:(id)arg1;
- (void)setScheme:(id)arg1;
- (void)setUser:(id)arg1;
- (id)string;
- (id)user;

@end
