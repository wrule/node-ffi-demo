const ffi = require('ffi');
const libm = ffi.Library('libjimao', {
  'test': ['void', []]
});

function test() {

}

console.log('开始');
for (let i = 0; i < 500000; ++i) {
  libm.test();
}
console.log('结束');

