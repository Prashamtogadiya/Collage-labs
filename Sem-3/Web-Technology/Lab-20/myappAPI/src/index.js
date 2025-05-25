import ReactDOM from 'react-dom/client';
import { BrowserRouter, Routes, Route } from 'react-router-dom';

import './index.css';
import Layout from './Layout'
import Home from './Home'
import About from './About'
import Contact from './Contact'
import Faculty from './Data';
import Faculties from './Faculties';
import FacultyDetail from './FacultyDetail';

const root = ReactDOM.createRoot(document.getElementById('root'));

root.render(
    <BrowserRouter>
        <Routes>
            <Route path='/faculty' element={<Faculties/>}/>
            <Route path='/faculty/:id' element={<FacultyDetail/>}/>
        </Routes>
    </BrowserRouter>
);