/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKPaymentAuthorizationDelegate : NSObject {
    struct BlockPtr<void (PKPaymentAuthorizationResult *)>="m_block"@? {}  _didAuthorizePaymentCompletion;
    struct BlockPtr<void (PKPaymentMerchantSession *, NSError *)>="m_block"@? {}  _didRequestMerchantSessionCompletion;
    struct BlockPtr<void (PKPaymentRequestPaymentMethodUpdate *)>="m_block"@? {}  _didSelectPaymentMethodCompletion;
    struct BlockPtr<void (PKPaymentRequestShippingContactUpdate *)>="m_block"@? {}  _didSelectShippingContactCompletion;
    struct BlockPtr<void (PKPaymentRequestShippingMethodUpdate *)>="m_block"@? {}  _didSelectShippingMethodCompletion;
    struct WeakPtr<WebKit::PaymentAuthorizationPresenter, WTF::EmptyCounter> { 
        struct RefPtr<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::RawPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter>>, WTF::DefaultRefDerefTraits<WTF::WeakPtrImpl<WTF::EmptyCounter>>> { 
            struct WeakPtrImpl<WTF::EmptyCounter> {} *m_ptr; 
        } m_impl; 
    }  _presenter;
    struct RetainPtr<PKPaymentRequest> { 
        void *m_ptr; 
    }  _request;
    struct RetainPtr<NSError> { 
        void *m_ptr; 
    }  _sessionError;
    struct RetainPtr<NSArray<PKShippingMethod *>> { 
        void *m_ptr; 
    }  _shippingMethods;
    struct RetainPtr<NSArray<PKPaymentSummaryItem *>> { 
        void *m_ptr; 
    }  _summaryItems;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_didAuthorizePayment:(id)arg1 completion:(id /* block */)arg2;
- (void)_didFinish;
- (void)_didRequestMerchantSession:(id /* block */)arg1;
- (void)_didSelectPaymentMethod:(id)arg1 completion:(id /* block */)arg2;
- (void)_didSelectShippingContact:(id)arg1 completion:(id /* block */)arg2;
- (void)_didSelectShippingMethod:(id)arg1 completion:(id /* block */)arg2;
- (void)_getPaymentServicesMerchantURL:(id /* block */)arg1;
- (id)_initWithRequest:(id)arg1 presenter:(struct PaymentAuthorizationPresenter { int (**x1)(); struct WeakPtrFactory<WebKit::PaymentAuthorizationPresenter, WTF::EmptyCounter> { struct RefPtr<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::RawPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter>>, WTF::DefaultRefDerefTraits<WTF::WeakPtrImpl<WTF::EmptyCounter>>> { struct WeakPtrImpl<WTF::EmptyCounter> {} *x_1_2_1; } x_2_1_1; } x2; struct Client {} *x3; }*)arg2;
- (void)_willFinishWithError:(id)arg1;
- (void)completeMerchantValidation:(id)arg1 error:(id)arg2;
- (void)completePaymentMethodSelection:(id)arg1;
- (void)completePaymentSession:(long long)arg1 errors:(id)arg2;
- (void)completeShippingContactSelection:(id)arg1;
- (void)completeShippingMethodSelection:(id)arg1;
- (void)invalidate;
- (id)shippingMethods;
- (id)summaryItems;

@end
