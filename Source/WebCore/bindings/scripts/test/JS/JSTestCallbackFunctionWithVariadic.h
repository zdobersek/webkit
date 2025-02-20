/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#pragma once

#include "IDLTypes.h"
#include "JSCallbackData.h"
#include "JSDOMConvertVariadic.h"
#include "TestCallbackFunctionWithVariadic.h"
#include <wtf/Forward.h>

namespace WebCore {

class JSTestCallbackFunctionWithVariadic final : public TestCallbackFunctionWithVariadic {
public:
    static Ref<JSTestCallbackFunctionWithVariadic> create(JSC::JSObject* callback, JSDOMGlobalObject* globalObject)
    {
        return adoptRef(*new JSTestCallbackFunctionWithVariadic(callback, globalObject));
    }

    ScriptExecutionContext* scriptExecutionContext() const { return ContextDestructionObserver::scriptExecutionContext(); }

    ~JSTestCallbackFunctionWithVariadic() final;
    JSCallbackDataStrong* callbackData() { return m_data; }

    // Functions
    CallbackResult<typename IDLDOMString::ImplementationType> handleEvent(FixedVector<typename VariadicConverter<IDLAny>::Item>&& arguments) override;

private:
    JSTestCallbackFunctionWithVariadic(JSC::JSObject*, JSDOMGlobalObject*);

    JSCallbackDataStrong* m_data;
};

JSC::JSValue toJS(TestCallbackFunctionWithVariadic&);
inline JSC::JSValue toJS(TestCallbackFunctionWithVariadic* impl) { return impl ? toJS(*impl) : JSC::jsNull(); }

} // namespace WebCore
