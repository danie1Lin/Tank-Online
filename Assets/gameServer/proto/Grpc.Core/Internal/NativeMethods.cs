#region Copyright notice and license

// Copyright 2015 gRPC authors.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#endregion

using System;
using System.Collections.Concurrent;
using System.Diagnostics;
using System.IO;
using System.Reflection;
using System.Runtime.InteropServices;
using System.Threading;

using Grpc.Core.Logging;
using Grpc.Core.Utils;

namespace Grpc.Core.Internal
{
    internal delegate void NativeCallbackTestDelegate(bool success);

    /// <summary>
    /// Provides access to all native methods provided by <c>NativeExtension</c>.
    /// An extra level of indirection is added to P/Invoke calls to allow intelligent loading
    /// of the right configuration of the native extension based on current platform, architecture etc.
    /// </summary>
    internal partial class NativeMethods
    {
        // Signatures of native methods are generated from a template
        // and can be found in NativeMethods.Generated.cs

#if UNITY_EDITOR               
    private const string pluginName = "grpc_csharp_ext";            
#elif UNITY_IOS || UNITY_TVOS || UNITY_WEBGL
    public const string pluginName = "__Internal";          
#else
    public const string pluginName = "grpc_csharp_ext";             
#endif

        /// <summary>
        /// Gets singleton instance of this class.
        /// </summary>
        /// 
        /// 
        /// 
        /*
        static class NativeCalls {
            [DllImport(pluginName)]
            internal static extern void grpcsharp_int();

            [DllImport(pluginName)]
            internal static extern void grpcsharp_shutdown();

        }

        public NativeMethods(UnmanagedLibrary library)
        {
            #if UNITY_IOS
                this.grpcsharp_init = NativeCalls.grpcsharp_init;
                this.grpcsharp_shutdown = NativeCalls.grpcsharp_shutdown;
                this.grpcsharp_version_string = NativeCalls.grpcsharp_version_string;
            #endif

        }
        */


        public static NativeMethods Get()
        {
            return NativeExtension.Get().NativeMethods;
        }

        static T GetMethodDelegate<T>(UnmanagedLibrary library)
            where T : class
        {
            var methodName = RemoveStringSuffix(typeof(T).Name, "_delegate");
            return library.GetNativeMethodDelegate<T>(methodName);
        }

        static string RemoveStringSuffix(string str, string toRemove)
        {
            if (!str.EndsWith(toRemove))
            {
                return str;
            }
            return str.Substring(0, str.Length - toRemove.Length);
        }
    }
}

