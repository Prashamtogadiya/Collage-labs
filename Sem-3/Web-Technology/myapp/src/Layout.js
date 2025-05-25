import {Link, Outlet} from "react-router-dom"

function Layout() {
    return (
        <>
            <header className="bg-light text-dark py-3 mb-4">
                <div className="container">
                    <div className="row align-items-center">
                        <div className="col-4">
                            <h1 className="h3">Logo</h1>
                        </div>
                        <div className="col">
                            <nav>
                                <ul className="nav">
                                    <li className="nav-item fs-5">
                                        <Link className="nav-link" to="/home">Home</Link>
                                    </li>
                                    <li className="nav-item fs-5">
                                        <Link className="nav-link" to="/about">About us</Link>
                                    </li>
                                    <li className="nav-item fs-5">
                                        <Link className="nav-link" to="/contact">Contact us</Link>
                                    </li>
                                </ul>
                            </nav>
                        </div>
                    </div>
                </div>
            </header>
            <main className="main mx-5" style={{minHeight: '100vh'}}>
                <div className="row">
                    <div className="bg-light text-dark col-md-3 h-100">
                        <aside className="p-3 text-center">
                            <h2 className="h5">Sidebar</h2>
                            <ul className="list-unstyled">
                                <li>Option 1</li>
                                <li>Option 2</li>
                                <li>Option 3</li>
                            </ul>
                        </aside>
                    </div>
                    <div className="col-md-9">
                        <div className="align-item-center p-3 text-center">
                            <Outlet />
                        </div>
                    </div>
                </div>
            </main>

            <footer className="bg-dark text-white py-3 mt-4">
                <div className="container text-center">
                    <p className="mb-0">&copy; 2024 Your Company. All rights reserved.</p>
                </div>
            </footer>
        </>
    )
}

export default Layout