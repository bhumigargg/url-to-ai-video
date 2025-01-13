function App() {
 

  return (
    <>
      <main className="max-w-2xl mx-auto flex px-4">
        <div className="py-8 flex flex-col justify-center">
          <h1 className="text-4xl font-bold mb-4"><span className="text-5xl">URL to video generator using </span><br/>
          <span className="bg-gradient-to-br from-emerald-500 to-blue-500 bg-clip-text text-transparent">POWER of AI</span>
          </h1>
          <form>
            <input type="url" placeholder="https://..." className="bg-transparent border py-3 rounded-2xl;"/>
            <button type="submit" className="bg-green-400 px-2 py-3 mx-3 rounded-2xl">Create video</button>
          </form>
        </div>
        <div>
          <div className="bg-gray-200 w-[320px] h-[500px] my-10"></div>
        </div>
      </main>
    </>
  )
}

export default App
 