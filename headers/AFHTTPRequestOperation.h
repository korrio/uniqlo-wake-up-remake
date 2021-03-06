/* Generated by RuntimeBrowser
   Image: /var/containers/Bundle/Application/A77617CC-81F8-4D57-BCE6-77E8D969EEA1/UniqloWakeUp.app/UniqloWakeUp
 */

@interface AFHTTPRequestOperation : AFURLConnectionOperation {
    NSError * _HTTPError;
    NSObject<OS_dispatch_queue> * _failureCallbackQueue;
    NSObject<OS_dispatch_queue> * _successCallbackQueue;
}

@property (nonatomic, readwrite, retain) NSError *HTTPError;
@property (nonatomic, readwrite) NSObject<OS_dispatch_queue> *failureCallbackQueue;
@property (nonatomic, readonly) bool hasAcceptableContentType;
@property (nonatomic, readonly) bool hasAcceptableStatusCode;
@property (nonatomic, readwrite, retain) NSRecursiveLock *lock;
@property (nonatomic, readwrite, retain) NSURLRequest *request;
@property (nonatomic, readwrite, retain) NSHTTPURLResponse *response;
@property (nonatomic, readwrite) NSObject<OS_dispatch_queue> *successCallbackQueue;

+ (id)acceptableContentTypes;
+ (id)acceptableStatusCodes;
+ (void)addAcceptableContentTypes:(id)arg1;
+ (void)addAcceptableStatusCodes:(id)arg1;
+ (bool)canProcessRequest:(id)arg1;

- (void).cxx_destruct;
- (id)HTTPError;
- (void)dealloc;
- (id)error;
- (id)failureCallbackQueue;
- (bool)hasAcceptableContentType;
- (bool)hasAcceptableStatusCode;
- (void)pause;
- (unsigned long long)responseStringEncoding;
- (void)setCompletionBlockWithSuccess:(id)arg1 failure:(id)arg2;
- (void)setFailureCallbackQueue:(id)arg1;
- (void)setHTTPError:(id)arg1;
- (void)setSuccessCallbackQueue:(id)arg1;
- (id)successCallbackQueue;

@end
